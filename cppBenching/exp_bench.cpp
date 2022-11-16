// Benchmarking the performance of the stdlib exp function
// ------------------------------------------------------

#include <benchmark/benchmark.h>
#include <cmath>

float_t exp_float32(float_t x) { return expf(x); }

static void bm_exp(benchmark::State &state) {
  for (auto _ : state) {
    benchmark::DoNotOptimize(exp_float32(state.range(0)));
  }
}

BENCHMARK_MAIN();
BENCHMARK(bm_exp)->Range(-20.0, 20.0);
