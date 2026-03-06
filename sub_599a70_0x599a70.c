// 函数名称: sub_599a70
// 虚拟地址: 0x599a70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_599a70(int32_t* arg1 @ esi, int32_t arg2)
{
    // 第一条实际指令: char edx
    char edx
    
    if (arg2 != 0)
        int32_t result
        result, edx = sub_599950(arg1)
        
        if (result == 0)
            return result
    
    arg1[2] = 0
    arg1[3] = 0
    int32_t eax_5
    
    do
        int32_t i = arg1[2]
        
        if (i s< 1)
            int32_t ebx_1 = arg1[1]
            int32_t edi_2 = arg1[3]
            
            do
                char* eax_1 = *arg1
                uint32_t eax_2
                
                if (eax_1 u< ebx_1)
                    edx = *eax_1
                    *arg1 = &eax_1[1]
                    eax_2 = zx.d(edx)
                else
                    eax_2 = 0
                
                int32_t eax_4 = eax_2 << i.b
                i += 8
                edi_2 |= eax_4
            while (i s<= 0x18)
            
            arg1[2] = i
            arg1[3] = edi_2
        
        eax_5 = arg1[3]
        arg1[2] -= 1
        int32_t i_1 = arg1[2]
        uint32_t eax_6 = eax_5 u>> 1
        arg1[3] = eax_6
        
        if (i_1 s< 2)
            int32_t ebx_2 = arg1[1]
            uint32_t edi_3 = eax_6
            
            do
                char* eax_7 = *arg1
                uint32_t eax_8
                
                if (eax_7 u< ebx_2)
                    edx = *eax_7
                    *arg1 = &eax_7[1]
                    eax_8 = zx.d(edx)
                else
                    eax_8 = 0
                
                int32_t eax_10 = eax_8 << i_1.b
                i_1 += 8
                edi_3 |= eax_10
            while (i_1 s<= 0x18)
            
            arg1[2] = i_1
            arg1[3] = edi_3
        
        int32_t eax_11 = arg1[3]
        arg1[2] -= 2
        uint32_t eax_12 = eax_11 u>> 2
        int32_t ecx_5 = eax_11 & 3
        arg1[3] = eax_12
        int32_t eax_14
        
        if (ecx_5 != 0)
            if (ecx_5 == 3)
                return 0
            
            int32_t eax_16
            
            if (ecx_5 != 1)
                eax_16 = sub_5993f0(arg1)
            else
                if (data_27c04b0:3.b == 0)
                    eax_12 = sub_5999e0()
                
                int32_t eax_15 = sub_598d30(eax_12, 0x27c04b8, &arg1[8], 0x120)
                
                if (eax_15 == 0)
                    return 0
                
                eax_16 = sub_598d30(eax_15, &data_27c0494, &arg1[0x201], 0x20)
            
            if (eax_16 == 0)
                return 0
            
            eax_14, edx = sub_599040(arg1)
        else
            eax_14, edx = sub_599840(arg1, edx, ecx_5)
        
        if (eax_14 == 0)
            return 0
        
        if (data_3168024 != 0 && arg1[4] - arg1[5] s> 0x10000)
            break
    while ((eax_5 & 1) == 0)
    return 1
}
