// 函数名称: __SEH_epilog4
// 虚拟地址: 0x5ac935
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t__SEH_epilog4(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = arg1[-4]
    *arg1
    *arg1 = __return_addr
}
