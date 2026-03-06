// 函数名称: sub_6079b0
// 虚拟地址: 0x6079b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6079b0(void* arg1)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    uint32_t var_14
    int32_t var_10
    int32_t var_c
    int32_t var_8
    
    if (sub_5d7350(*(esi + 4), &var_14, &var_10, &var_c, &var_8, &arg1) == 0)
        sub_5cce60("Unknown texture format")
        return 0xffffffff
    
    void* var_1c_1 = arg1
    char* eax_4 = sub_5d6670(0, *(esi + 0xc), *(esi + 0x10), var_14, var_10, var_c, var_8)
    char ecx_2 = *(esi + 0x1e)
    char edx_3 = *(esi + 0x1d)
    char ecx_3 = *(esi + 0x1c)
    *(esi + 0x44) = eax_4
    sub_5d5e40(eax_4, ecx_3, edx_3, ecx_2)
    sub_5d5eb0(*(esi + 0x44), *(esi + 0x1f))
    sub_5d5f00(*(esi + 0x44), *(esi + 0x18))
    
    if (*(esi + 8) == 0)
        sub_5d5cb0(*(esi + 0x44), 1)
    
    int32_t eax_7 = *(esi + 0x44)
    int32_t eax_8 = neg.d(eax_7)
    return neg.d(sbb.d(eax_8, eax_8, eax_7 != 0)) - 1
}
