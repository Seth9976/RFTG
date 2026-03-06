// 函数名称: _fast_error_exit
// 虚拟地址: 0x5a8cd5
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void_fast_error_exit(int32_t arg1) __noreturn
{
    // 第一条实际指令: if (data_bec5cc == 1)
    if (data_bec5cc == 1)
        __FF_MSGBANNER()
    
    sub_5af622(arg1)
    __endthreadex(0xff)
    noreturn
}
