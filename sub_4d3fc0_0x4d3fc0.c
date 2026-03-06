// 函数名称: sub_4d3fc0
// 虚拟地址: 0x4d3fc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4d3fc0()
{
    // 第一条实际指令: void* result = data_27e7fcc
    void* result = data_27e7fcc
    
    if (result != 0)
        int32_t* ebx_1 = *(result + 4)
        int32_t ecx_1 = ebx_1[1]
        result = nullptr
        int32_t i_1
        
        if (ecx_1 == 0)
        label_4d3ff1:
            i_1 = 0
        else
            void* edx_1 = *ebx_1
            
            while ((*(edx_1 + 0x68) & 0xffff0000) == 0)
                result += 1
                edx_1 += 0x6c
                
                if (result u>= ecx_1)
                    goto label_4d3ff1
            
            i_1 = *(edx_1 + 0x68)
        
        int32_t i = i_1
        
        if (i_1 != 0)
            do
                int32_t edi_1 = *ebx_1
                int32_t esi_1 = i & 0xffff
                int32_t eax = esi_1 + 1
                int32_t esi_2 = ebx_1[1]
                
                if (eax u>= esi_2)
                label_4d4031:
                    i = 0
                else
                    void* edx_4 = eax * 0x6c + edi_1
                    
                    while ((*(edx_4 + 0x68) & 0xffff0000) == 0)
                        eax += 1
                        edx_4 += 0x6c
                        
                        if (eax u>= esi_2)
                            goto label_4d4031
                    
                    i = *(edx_4 + 0x68)
                
                result = sub_4d3c40(*(esi_1 * 0x6c + edi_1 + 0x68))
            while (i != 0)
    
    return result
}
