// 函数名称: sub_50a880
// 虚拟地址: 0x50a880
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_50a880()
{
    // 第一条实际指令: int32_t* esi = data_30785d8
    int32_t* esi = data_30785d8
    int32_t* entry_ebx
    int32_t* result = *entry_ebx
    int32_t eax = result[2]
    
    if (eax != 0)
        *entry_ebx = eax
        return result
    
    char* const eax_2 = *result
    
    if (eax_2 == 0)
        eax_2 = &data_83f3d3
    
    int32_t eax_3 = sub_519130(eax_2)
    int32_t edx = esi[1]
    int32_t ecx_2 = (edx & eax_3) + 1
    
    if (ecx_2 u<= edx)
        int32_t* eax_5 = *esi + (ecx_2 << 2)
        
        do
            int32_t esi_1 = *eax_5
            
            if (esi_1 != 0)
                *entry_ebx = esi_1
                return result
            
            ecx_2 += 1
            eax_5 = &eax_5[1]
        while (ecx_2 u<= edx)
    
    *entry_ebx = 0
    return result
}
