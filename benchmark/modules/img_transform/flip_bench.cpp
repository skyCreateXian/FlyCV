// Copyright (c) 2022 FlyCV Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.

#include "benchmark/benchmark.h"
#include "common/utils.h"
#include "flycv.h"

using namespace g_fcv_ns;

class FlipBench : public benchmark::Fixture {
public:
    void SetUp(const ::benchmark::State& state) {
        feed_num = state.range(0);
        set_thread_num(G_THREAD_NUM);
    }

public:
    int feed_num;
};

BENCHMARK_DEFINE_F(FlipBench, GRAYU8_720P_X)(benchmark::State& state) {
    Mat src = Mat(1280, 720, FCVImageType::GRAY_U8);
    construct_data<unsigned char>(src.total_byte_size(), feed_num, src.data());
    
    Mat dst;
    for (auto _state : state) {
        flip(src, dst, FlipType::X);
    }
}

BENCHMARK_DEFINE_F(FlipBench, RGBU8_720P_X)(benchmark::State& state) {
    Mat src = Mat(1280, 720, FCVImageType::PKG_BGR_U8);
    construct_data<unsigned char>(src.total_byte_size(), feed_num, src.data());
    
    Mat dst;
    for (auto _state : state) {
        flip(src, dst, FlipType::X);
    }
}

// BENCHMARK_DEFINE_F(FlipBench, RGBAU8_720P_X)(benchmark::State& state) {
//     Mat src = Mat(1280, 720, FCVImageType::PKG_BGRA_U8);
//     construct_data<unsigned char>(src.total_byte_size(), feed_num, src.data());
    
//     Mat dst;
//     for (auto _state : state) {
//         flip(src, dst, FlipType::X);
//     }
// }

BENCHMARK_REGISTER_F(FlipBench, GRAYU8_720P_X)
        ->Unit(benchmark::kMicrosecond)
        ->Iterations(100)
        ->DenseRange(55, 255, 200);

BENCHMARK_REGISTER_F(FlipBench, RGBU8_720P_X)
        ->Unit(benchmark::kMicrosecond)
        ->Iterations(100)
        ->DenseRange(55, 255, 200);

// BENCHMARK_REGISTER_F(FlipBench, RGBAU8_720P_X)
//         ->Unit(benchmark::kMicrosecond)
//         ->Iterations(100)
//         ->DenseRange(55, 255, 200);

//1080
BENCHMARK_DEFINE_F(FlipBench, GRAYU8_1080P_X)(benchmark::State& state) {
    Mat src = Mat(1920, 1080, FCVImageType::GRAY_U8);
    construct_data<unsigned char>(src.total_byte_size(), feed_num, src.data());
    
    Mat dst;
    for (auto _state : state) {
        flip(src, dst, FlipType::X);
    }
}

BENCHMARK_DEFINE_F(FlipBench, RGBU8_1080P_X)(benchmark::State& state) {
    Mat src = Mat(1920, 1080, FCVImageType::PKG_BGR_U8);
    construct_data<unsigned char>(src.total_byte_size(), feed_num, src.data());
    
    Mat dst;
    for (auto _state : state) {
        flip(src, dst, FlipType::X);
    }
}

// BENCHMARK_DEFINE_F(FlipBench, RGBAU8_1080P_X)(benchmark::State& state) {
//     Mat src = Mat(1920, 1080, FCVImageType::PKG_BGRA_U8);
//     construct_data<unsigned char>(src.total_byte_size(), feed_num, src.data());
    
//     Mat dst;
//     for (auto _state : state) {
//         flip(src, dst, FlipType::X);
//     }
// }

BENCHMARK_REGISTER_F(FlipBench, GRAYU8_1080P_X)
        ->Unit(benchmark::kMicrosecond)
        ->Iterations(100)
        ->DenseRange(55, 255, 200);

BENCHMARK_REGISTER_F(FlipBench, RGBU8_1080P_X)
        ->Unit(benchmark::kMicrosecond)
        ->Iterations(100)
        ->DenseRange(55, 255, 200);

// BENCHMARK_REGISTER_F(FlipBench, RGBAU8_1080P_X)
//         ->Unit(benchmark::kMicrosecond)
//         ->Iterations(100)
//         ->DenseRange(55, 255, 200);

//4K        

BENCHMARK_DEFINE_F(FlipBench, GRAYU8_4K_X)(benchmark::State& state) {
    Mat src = Mat(4032, 3024, FCVImageType::GRAY_U8);
    construct_data<unsigned char>(src.total_byte_size(), feed_num, src.data());
    
    Mat dst;
    for (auto _state : state) {
        flip(src, dst, FlipType::X);
    }
}

BENCHMARK_DEFINE_F(FlipBench, RGBU8_4K_X)(benchmark::State& state) {
    Mat src = Mat(4032, 3024, FCVImageType::PKG_BGR_U8);
    construct_data<unsigned char>(src.total_byte_size(), feed_num, src.data());
    
    Mat dst;
    for (auto _state : state) {
        flip(src, dst, FlipType::X);
    }
}

// BENCHMARK_DEFINE_F(FlipBench, RGBAU8_4K_X)(benchmark::State& state) {
//     Mat src = Mat(4032, 3024, FCVImageType::PKG_BGRA_U8);
//     construct_data<unsigned char>(src.total_byte_size(), feed_num, src.data());
    
//     Mat dst;
//     for (auto _state : state) {
//         flip(src, dst, FlipType::X);
//     }
// }

BENCHMARK_REGISTER_F(FlipBench, GRAYU8_4K_X)
        ->Unit(benchmark::kMicrosecond)
        ->Iterations(100)
        ->DenseRange(55, 255, 200);

BENCHMARK_REGISTER_F(FlipBench, RGBU8_4K_X)
        ->Unit(benchmark::kMicrosecond)
        ->Iterations(100)
        ->DenseRange(55, 255, 200);

// BENCHMARK_REGISTER_F(FlipBench, RGBAU8_4K_X)
//         ->Unit(benchmark::kMicrosecond)
//         ->Iterations(100)
//         ->DenseRange(55, 255, 200);

BENCHMARK_DEFINE_F(FlipBench, GRAYU8_720P_Y)(benchmark::State& state) {
    Mat src = Mat(1280, 720, FCVImageType::GRAY_U8);
    construct_data<unsigned char>(src.total_byte_size(), feed_num, src.data());
    
    Mat dst;
    for (auto _state : state) {
        flip(src, dst, FlipType::Y);
    }
}

BENCHMARK_DEFINE_F(FlipBench, RGBU8_720P_Y)(benchmark::State& state) {
    Mat src = Mat(1280, 720, FCVImageType::PKG_BGR_U8);
    construct_data<unsigned char>(src.total_byte_size(), feed_num, src.data());
    
    Mat dst;
    for (auto _state : state) {
        flip(src, dst, FlipType::Y);
    }
}

// BENCHMARK_DEFINE_F(FlipBench, RGBAU8_720P_Y)(benchmark::State& state) {
//     Mat src = Mat(1280, 720, FCVImageType::PKG_BGRA_U8);
//     construct_data<unsigned char>(src.total_byte_size(), feed_num, src.data());
    
//     Mat dst;
//     for (auto _state : state) {
//         flip(src, dst, FlipType::Y);
//     }
// }

BENCHMARK_REGISTER_F(FlipBench, GRAYU8_720P_Y)
        ->Unit(benchmark::kMicrosecond)
        ->Iterations(100)
        ->DenseRange(55, 255, 200);

BENCHMARK_REGISTER_F(FlipBench, RGBU8_720P_Y)
        ->Unit(benchmark::kMicrosecond)
        ->Iterations(100)
        ->DenseRange(55, 255, 200);

// BENCHMARK_REGISTER_F(FlipBench, RGBAU8_720P_Y)
//         ->Unit(benchmark::kMicrosecond)
//         ->Iterations(100)
//         ->DenseRange(55, 255, 200);

//1080
BENCHMARK_DEFINE_F(FlipBench, GRAYU8_1080P_Y)(benchmark::State& state) {
    Mat src = Mat(1920, 1080, FCVImageType::GRAY_U8);
    construct_data<unsigned char>(src.total_byte_size(), feed_num, src.data());
    
    Mat dst;
    for (auto _state : state) {
        flip(src, dst, FlipType::Y);
    }
}

BENCHMARK_DEFINE_F(FlipBench, RGBU8_1080P_Y)(benchmark::State& state) {
    Mat src = Mat(1920, 1080, FCVImageType::PKG_BGR_U8);
    construct_data<unsigned char>(src.total_byte_size(), feed_num, src.data());
    
    Mat dst;
    for (auto _state : state) {
        flip(src, dst, FlipType::Y);
    }
}

// BENCHMARK_DEFINE_F(FlipBench, RGBAU8_1080P_Y)(benchmark::State& state) {
//     Mat src = Mat(1920, 1080, FCVImageType::PKG_BGRA_U8);
//     construct_data<unsigned char>(src.total_byte_size(), feed_num, src.data());
    
//     Mat dst;
//     for (auto _state : state) {
//         flip(src, dst, FlipType::Y);
//     }
// }

BENCHMARK_REGISTER_F(FlipBench, GRAYU8_1080P_Y)
        ->Unit(benchmark::kMicrosecond)
        ->Iterations(100)
        ->DenseRange(55, 255, 200);

BENCHMARK_REGISTER_F(FlipBench, RGBU8_1080P_Y)
        ->Unit(benchmark::kMicrosecond)
        ->Iterations(100)
        ->DenseRange(55, 255, 200);

// BENCHMARK_REGISTER_F(FlipBench, RGBAU8_1080P_Y)
//         ->Unit(benchmark::kMicrosecond)
//         ->Iterations(100)
//         ->DenseRange(55, 255, 200);

//4K        

BENCHMARK_DEFINE_F(FlipBench, GRAYU8_4K_Y)(benchmark::State& state) {
    Mat src = Mat(4032, 3024, FCVImageType::GRAY_U8);
    construct_data<unsigned char>(src.total_byte_size(), feed_num, src.data());
    
    Mat dst;
    for (auto _state : state) {
        flip(src, dst, FlipType::Y);
    }
}

BENCHMARK_DEFINE_F(FlipBench, RGBU8_4K_Y)(benchmark::State& state) {
    Mat src = Mat(4032, 3024, FCVImageType::PKG_BGR_U8);
    construct_data<unsigned char>(src.total_byte_size(), feed_num, src.data());
    
    Mat dst;
    for (auto _state : state) {
        flip(src, dst, FlipType::Y);
    }
}

// BENCHMARK_DEFINE_F(FlipBench, RGBAU8_4K_Y)(benchmark::State& state) {
//     Mat src = Mat(4032, 3024, FCVImageType::PKG_BGRA_U8);
//     construct_data<unsigned char>(src.total_byte_size(), feed_num, src.data());
    
//     Mat dst;
//     for (auto _state : state) {
//         flip(src, dst, FlipType::Y);
//     }
// }

BENCHMARK_REGISTER_F(FlipBench, GRAYU8_4K_Y)
        ->Unit(benchmark::kMicrosecond)
        ->Iterations(100)
        ->DenseRange(55, 255, 200);

BENCHMARK_REGISTER_F(FlipBench, RGBU8_4K_Y)
        ->Unit(benchmark::kMicrosecond)
        ->Iterations(100)
        ->DenseRange(55, 255, 200);

// BENCHMARK_REGISTER_F(FlipBench, RGBAU8_4K_Y)
//         ->Unit(benchmark::kMicrosecond)
//         ->Iterations(100)
//         ->DenseRange(55, 255, 200);
