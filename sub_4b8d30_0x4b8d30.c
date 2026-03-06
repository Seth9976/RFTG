// 函数名称: sub_4b8d30
// 虚拟地址: 0x4b8d30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4b8d30(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    int32_t i = 0
    void* result
    
    if (esi[0x50] s> 0)
        int32_t* edi_1 = esi
        
        do
            if (*edi_1 != *(arg2 + 4))
                int32_t ecx_2 = edi_1[0x12]
                
                if (ecx_2 == 0)
                label_4b8d7e:
                    result = sub_4b7170(*edi_1)
                    
                    if (result != 0)
                        edi_1[0x12] = *(result + 0x1c0)
                    
                    esi = arg1
                else
                    void* edx_1 = data_27e7a44
                    uint32_t eax = zx.d(ecx_2.w)
                    
                    if (eax u>= *(edx_1 + 0x20))
                        goto label_4b8d7e
                    
                    result = eax * 0x1c4 + *(edx_1 + 0x1c)
                    
                    if (*(result + 0x1c0) != ecx_2 || *(result + 4) != *edi_1)
                        goto label_4b8d7e
                
                if (result != 0)
                    result.b = 1
                    return result
            
            i += 1
            edi_1 = &edi_1[0x14]
        while (i s< esi[0x50])
    
    result.b = 0
    return result
}
