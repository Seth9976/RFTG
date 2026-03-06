// 函数名称: sub_5eb0d0
// 虚拟地址: 0x5eb0d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5eb0d0(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4, int32_t arg5)
{
    // 第一条实际指令: void* ecx = arg4
    void* ecx = arg4
    int32_t edx = *(ecx + 0x18)
    int32_t esi = *(ecx + 0x10)
    int32_t ebx = edx * 2
    char* eax = esi + ebx - 2
    char* edi = esi + edx - 1
    uint32_t edx_1 = zx.d(*edi)
    
    if (eax u>= esi)
        do
            uint32_t ecx_1 = zx.d(*edi)
            eax[1] = ((edx_1 + ecx_1) s>> 1).b
            *eax = ecx_1.b
            eax -= 2
            edi -= 1
            edx_1 = ecx_1
        while (eax u>= esi)
        
        ecx = arg4
    
    *(ecx + 0x50) += 1
    int32_t result = *(ecx + 0x50)
    *(ecx + 0x18) = ebx
    
    if (*(ecx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(ecx + (result << 2) + 0x28))(ecx, arg5, arg3)
}
