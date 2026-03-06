// 函数名称: sub_470e10
// 虚拟地址: 0x470e10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_470e10(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c = arg1
    int32_t var_c = arg1
    var_c = __security_cookie ^ &var_c
    void* eax_2 = sub_46b2b0(arg1)
    *(eax_2 + 0x1c) = 0x18
    *(eax_2 + 0x1f8c) = 0xffffffff
    void* eax_4 = *(data_27e7a40 + 0x548)
    *(eax_4 + 0x210) = 0
    *(eax_4 + 0x214) = 0
    int32_t ecx = var_c
    *(eax_4 + 0x2c078) = 1
    sub_5a6aba(ecx ^ &var_c)
    return 0
}
