// 函数名称: __seh_longjmp_unwind4@4
// 虚拟地址: 0x5b0cb6
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __stdcall__seh_longjmp_unwind4@4(int32_t* arg1)
{
    // 第一条实际指令: *arg1
    *arg1
    return __local_unwind4(arg1[0xa], arg1[6], arg1[7])
}
