// 函数名称: sub_5bfc00
// 虚拟地址: 0x5bfc00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5bfc00(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, void* arg5)
{
    // 第一条实际指令: void* esi = arg5
    void* esi = arg5
    
    if (esi == 0)
        esi = arg1 + 8
    
    int32_t temp0 = *(arg1 + 0x34)
    
    if (arg3 u>= temp0 && (arg3 u> temp0 || arg2 u>= *(arg1 + 0x30)))
        zip_error_set(esi, 0x12, 0)
        return 0
    
    int32_t edi_1 = arg4 & 8
    int32_t result
    
    if (edi_1 == 0)
        result = *(*(arg1 + 0x40) + arg2 * 0x10 + 4)
    
    if (edi_1 != 0 || result == 0)
        int32_t edx_1 = *(arg1 + 0x40)
        int32_t ecx_1 = arg2 * 2
        result = *(edx_1 + (ecx_1 << 3))
        
        if (result == 0)
            zip_error_set(esi, 0x12, result)
            return 0
        
        if (*(edx_1 + (ecx_1 << 3) + 0xc) != 0 && edi_1 == 0)
            zip_error_set(esi, 0x17, edi_1)
            return 0
    
    return result
}
