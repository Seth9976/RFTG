// 函数名称: sub_5ec680
// 虚拟地址: 0x5ec680
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5ec680(int32_t arg1, int32_t arg2, int32_t arg3, uint32_t arg4, int32_t arg5)
{
    // 第一条实际指令: uint32_t ecx = arg4
    uint32_t ecx = arg4
    int32_t edx = *(ecx + 0x18)
    int32_t esi = *(ecx + 0x10)
    char* edi = esi + edx - 1
    int32_t ebx = edx * 2
    edx.w = sx.w(*edi)
    void* eax = esi + ebx - 2
    uint32_t edx_1 = zx.d(edx.w)
    
    if (eax u>= esi)
        do
            ecx.w = sx.w(*edi)
            ecx = zx.d(ecx.w)
            *(eax + 1) = ((edx_1 + ecx) s>> 1).b
            *eax = ecx.b
            eax -= 2
            edi -= 1
            edx_1 = ecx
        while (eax u>= esi)
        
        ecx = arg4
    
    *(ecx + 0x50) += 1
    int32_t result = *(ecx + 0x50)
    *(ecx + 0x18) = ebx
    
    if (*(ecx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(ecx + (result << 2) + 0x28))(ecx, arg5, arg3)
}
