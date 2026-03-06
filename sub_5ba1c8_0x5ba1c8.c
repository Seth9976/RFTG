// 函数名称: sub_5ba1c8
// 虚拟地址: 0x5ba1c8
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ba1c8(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: sub_5a6aba(arg1[-7] ^ arg1)
    sub_5a6aba(arg1[-7] ^ arg1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = arg1[-4]
    *arg1
    *arg1 = __return_addr
}
