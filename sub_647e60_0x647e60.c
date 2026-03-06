// 函数名称: sub_647e60
// 虚拟地址: 0x647e60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_647e60(void* arg1, double arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* esi = *(arg1 + 0x1c)
    int32_t* ebx = *(esi + (arg6 << 2) + 0xb24)
    int32_t eax
    int32_t ecx_1
    int32_t edx
    eax, ecx_1, edx = sub_685f40(fconvert.t(arg2))
    arg2:4.d = eax
    
    if (arg6 s>= *(esi + 0x1c))
        ecx_1 = arg6 + 1
        *(esi + 0x1c) = ecx_1
    
    if (ebx == 0)
        ebx = _calloc(eax, edx, ecx_1, 1, 0x208)
        *(esi + (arg6 << 2) + 0xb24) = ebx
    
    int32_t result = arg6 s>> 1
    __builtin_memcpy(ebx, 0x762a60, 0x208)
    *ebx = result
    
    if (*(esi + 0xd84) != 0)
        result = arg2:4.d
        ebx[0x7d] = 1
        ebx[0x7e] = *(arg3 + (result << 2))
        ebx[0x7f] = *(arg4 + (result << 2))
        *(ebx + 0x200) = fconvert.d(fconvert.t(*(arg5 + (result << 3))))
    
    return result
}
