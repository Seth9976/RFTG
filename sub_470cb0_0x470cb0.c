// 函数名称: sub_470cb0
// 虚拟地址: 0x470cb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_470cb0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4 @ edi, int32_t arg5)
{
    // 第一条实际指令: int32_t var_c = arg3
    int32_t var_c = arg3
    var_c = __security_cookie ^ &var_c
    void* eax_2
    int32_t edx
    eax_2, edx = sub_46b2b0(arg3)
    *(eax_2 + 0x1c) = 0x15
    *(eax_2 + 0x1a08) = arg4
    sub_46aca0(eax_2 + 0xaa4, edx, arg5, arg4)
    int32_t var_18 = arg4 << 2
    int32_t ebx
    int32_t var_1c = ebx
    sub_5ab990(eax_2 + 0x14e4)
    void* result = *(data_27e7a40 + 0x548)
    *(result + 0x210) = 0
    *(result + 0x214) = 0
    int32_t ecx_3 = var_c ^ &var_c
    *(result + 0x2c078) = 1
    sub_5a6aba(ecx_3)
    return result
}
