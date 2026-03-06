// 函数名称: sub_46e430
// 虚拟地址: 0x46e430
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_46e430(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4 @ edi, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t var_c = arg3
    int32_t var_c = arg3
    var_c = __security_cookie ^ &var_c
    void* eax_2
    int32_t edx
    eax_2, edx = sub_46b2b0(arg3)
    *(eax_2 + 0x1c) = 1
    int32_t* entry_ebx
    sub_46aca0(eax_2 + 0xaa4, edx, arg5, *entry_ebx)
    *(eax_2 + 0x1a08) = *entry_ebx
    int32_t edx_1 = *arg4
    sub_46aca0(eax_2 + 0x1a10, edx_1, arg6, edx_1)
    void* ecx_3 = data_27e7a40
    *(eax_2 + 0x1f30) = *arg4
    *(eax_2 + 0x554) = 2
    *(eax_2 + 0x558) = 2
    void* result = *(ecx_3 + 0x548)
    *(result + 0x210) = 0
    *(result + 0x214) = 0
    int32_t ecx_5 = var_c ^ &var_c
    *(result + 0x2c078) = 1
    sub_5a6aba(ecx_5)
    return result
}
