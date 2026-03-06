// 函数名称: sub_634ff0
// 虚拟地址: 0x634ff0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_634ff0(void* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(arg3)
    int32_t result = (eax_1 + (edx & 0x3f)) s>> 6
    int32_t __saved_esi_2 = arg3 & 0x3f
    
    if (result != 0)
        void* edx_2 = arg1 + 0x18
        void* ecx_2 = arg2 + 0x10
        int32_t i
        
        do
            *(edx_2 - 0x18) = *(ecx_2 - 0x10)
            *(edx_2 - 0x10) = *(ecx_2 - 8)
            *(arg1 - arg2 + ecx_2) = *ecx_2
            *edx_2 = *(ecx_2 + 8)
            *(edx_2 + 8) = *(ecx_2 + 0x10)
            *(edx_2 + 0x10) = *(ecx_2 + 0x18)
            *(edx_2 + 0x18) = *(ecx_2 + 0x20)
            *(edx_2 + 0x20) = *(ecx_2 + 0x28)
            edx_2 += 0x40
            ecx_2 += 0x40
            i = result
            result -= 1
        while (i != 1)
    
    if (__saved_esi_2 == 0)
        return result
    
    void* ebx_1 = arg3 - __saved_esi_2
    int32_t __saved_esi_1 = __saved_esi_2
    void* var_14_1 = ebx_1 + arg2
    void* var_18_1 = ebx_1 + arg1
    return sub_5cd110()
}
