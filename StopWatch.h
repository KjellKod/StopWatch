/* 
 * File:   StopWatch.h
 * Author: KjellKod
 * From: https://github.com/KjellKod/StopWatch
 * 
 * Created on 2014-02-07 
 */


#pragma once
#include <chrono>


class StopWatch {
public:
   typedef std::chrono::steady_clock clock;
   typedef std::chrono::microseconds microseconds;
   typedef std::chrono::milliseconds milliseconds;
   typedef std::chrono::seconds seconds;

   StopWatch();
   StopWatch(const StopWatch&);
   StopWatch& operator=(const StopWatch& rhs);

   uint64_t ElapsedUs() const;
   uint64_t ElapsedMs() const;
   uint64_t ElapsedSec() const;

   std::chrono::steady_clock::time_point Restart();

private:
   clock::time_point mStart;
};

