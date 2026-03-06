// 函数名称: sub_4d30e0
// 虚拟地址: 0x4d30e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4d30e0()
{
    // 第一条实际指令: int32_t edx = data_be1a64
    int32_t edx = data_be1a64
    int32_t eax = 0
    void* edi = data_be1a60
    int32_t result
    
    if (edx u<= 0)
    label_4d3111:
        result = 0
    else
        void* ecx_1 = edi
        
        while ((*(ecx_1 + 0x20) & 0xffff0000) == 0)
            eax += 1
            ecx_1 += 0x24
            
            if (eax u>= edx)
                goto label_4d3111
        
        result = *(ecx_1 + 0x20)
    
    if (result != 0)
        while (true)
            int32_t eax_1 = result & 0xffff
            int32_t eax_2 = eax_1 + 1
            void* esi_1 = edi + eax_1 * 0x24
            
            if (eax_2 u>= edx)
            label_4d3153:
                result = 0
            else
                void* ecx_4 = edi + eax_2 * 0x24
                
                while ((*(ecx_4 + 0x20) & 0xffff0000) == 0)
                    eax_2 += 1
                    ecx_4 += 0x24
                    
                    if (eax_2 u>= edx)
                        goto label_4d3153
                
                result = *(ecx_4 + 0x20)
            
            int32_t ecx_5 = data_be1a6c
            data_be1a6c = zx.d(*(esi_1 + 0x20))
            *(esi_1 + 0x20) = ecx_5
            data_be1a70 -= 1
            
            if (result == 0)
                break
            
            edx = data_be1a64
            edi = data_be1a60
    
    data_be1a6c = 0
    data_be1a64 = 0
    return result
}
