sim_4pno_responses <- function(n = 50, j = 5) {
  Y_4pno_simulate(
    n, j,
    as = rep(1.5, j), bs = rep(0, j), gs = rep(0.1, j), ss = rep(0.1, j),
    theta = rnorm(n)
  )
}

fit_4pno <- function(y, burnin, chain_length) {
  Gibbs_4PNO(
    y,
    mu_xi = c(0, 0), Sigma_xi_inv = solve(2 * diag(2)),
    mu_theta = 0, Sigma_theta_inv = 1,
    alpha_c = 1, beta_c = 1, alpha_s = 1, beta_s = 1,
    burnin = burnin, cTF = rep(1, ncol(y)), sTF = rep(1, ncol(y)),
    gwg_reps = 5, chain_length = chain_length
  )
}

fit_2pno <- function(y, burnin, chain_length) {
  Gibbs_2PNO(
    y,
    mu_xi = c(0, 0), Sigma_xi_inv = solve(2 * diag(2)),
    mu_theta = 0, Sigma_theta_inv = 1,
    burnin = burnin, chain_length = chain_length
  )
}

test_that("Gibbs_4PNO() stores every post-burn-in draw when burnin = 0", {
  set.seed(1)
  y <- sim_4pno_responses(n = 50)

  fit <- fit_4pno(y, burnin = 0, chain_length = 20)

  # Each HistS column tabulates the total scores of all 50 simulated
  # students; an unfilled column is all zeros.
  expect_equal(colSums(fit$HistS), rep(50, 20))
  expect_true(all(fit$Ds > 0))
})

test_that("Gibbs_2PNO() stores every post-burn-in draw when burnin = 0", {
  set.seed(1)
  y <- sim_4pno_responses(n = 50)

  fit <- fit_2pno(y, burnin = 0, chain_length = 20)

  expect_equal(colSums(fit$HistS), rep(50, 20))
  expect_true(all(fit$Ds > 0))
})

test_that("Gibbs_4PNO() and Gibbs_2PNO() reject responses with missing values", {
  set.seed(1)
  y <- sim_4pno_responses(n = 50)
  y[1, 1] <- NA

  expect_error(fit_4pno(y, burnin = 5, chain_length = 10), "must not contain missing values")
  expect_error(fit_2pno(y, burnin = 5, chain_length = 10), "must not contain missing values")
})
