// 函数名称: sub_6822b0
// 虚拟地址: 0x6822b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_6822b0(int32_t arg1, int32_t* arg2 @ edi)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* eax_1
    int32_t edx_1
    eax_1, edx_1 = (*arg2[1])(arg2, 1, arg1 << 5)
    void* esi = eax_1
    *(esi + 4) = 0x1f
    *(esi + 0x14) = 0x1f
    *esi = 0
    *(esi + 8) = 0
    *(esi + 0xc) = 0x3f
    *(esi + 0x10) = 0
    sub_681c70(0, edx_1, arg2, esi)
    int32_t eax_2
    char* ecx_4
    void* edx_2
    eax_2, ecx_4, edx_2 = sub_681fe0(arg2, esi, 1, arg1)
    int32_t ebx_1 = 0
    
    if (eax_2 s> 0)
        do
            int32_t var_14_1 = ebx_1
            int32_t* var_18_1 = arg2
            ecx_4, edx_2 = sub_682150(esi, edx_2, ecx_4)
            ebx_1 += 1
            esi += 0x20
        while (ebx_1 s< eax_2)
    
    void* ecx_5 = *arg2
    arg2[0x21] = eax_2
    *(ecx_5 + 0x14) = 0x60
    *(*arg2 + 0x18) = eax_2
    return (*(*arg2 + 4))(arg2, 1)
}
