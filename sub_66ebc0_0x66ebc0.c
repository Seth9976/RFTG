// 函数名称: sub_66ebc0
// 虚拟地址: 0x66ebc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_66ebc0(void* arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: char ecx = *(arg1 + 0xa)
    char ecx = *(arg1 + 0xa)
    int32_t ebx
    int32_t var_8 = ebx
    void* esi_1 = *(arg1 + 4) + arg2
    char* eax = arg2
    
    if (ecx == 2)
        ecx = *(arg1 + 9)
        
        if (ecx == 8)
            char* ecx_1
            
            if (arg3 == 0)
                ecx_1 = &arg2[2]
                eax = &arg2[1]
            else
                ecx_1 = &arg2[1]
            
            while (ecx_1 u< esi_1)
                ebx.b = *ecx_1
                *eax = ebx.b
                ecx_1 = &ecx_1[2]
                eax = &eax[1]
            
            *(arg1 + 0xb) = 8
            goto label_66ec4a
        
        if (ecx == 0x10)
            void* ecx_2
            
            if (arg3 == 0)
                ecx_2 = &arg2[4]
                eax = &arg2[2]
            else
                ecx_2 = &arg2[2]
            
            while (ecx_2 u< esi_1)
                *eax = *ecx_2
                eax[1] = *(ecx_2 + 1)
                ecx_2 += 4
                eax = &eax[2]
            
            *(arg1 + 0xb) = 0x10
        label_66ec4a:
            bool cond:0_1 = *(arg1 + 8) != 4
            *(arg1 + 0xa) = 1
            
            if (not(cond:0_1))
                void* eax_1 = eax - arg2
                *(arg1 + 8) = 0
                *(arg1 + 4) = eax_1
                return eax_1
            
            eax -= arg2
            *(arg1 + 4) = eax
    else if (ecx == 4)
        ecx = *(arg1 + 9)
        
        if (ecx == 8)
            void* ecx_3
            
            if (arg3 == 0)
                ecx_3 = &arg2[4]
                eax = &arg2[3]
            else
                ecx_3 = &arg2[1]
            
            while (ecx_3 u< esi_1)
                *eax = *ecx_3
                eax[1] = *(ecx_3 + 1)
                eax[2] = *(ecx_3 + 2)
                ecx_3 += 4
                eax = &eax[3]
            
            *(arg1 + 0xb) = 0x18
            goto label_66ed06
        
        if (ecx == 0x10)
            char* ecx_4
            
            if (arg3 == 0)
                ecx_4 = &arg2[8]
                eax = &arg2[6]
            else
                ecx_4 = &arg2[2]
            
            if (ecx_4 u< esi_1)
                char* ecx_5 = ecx_4
                
                do
                    *eax = *ecx_5
                    eax[1] = ecx_5[1]
                    eax[2] = ecx_5[2]
                    eax[3] = ecx_5[3]
                    eax[4] = ecx_5[4]
                    eax[5] = ecx_5[5]
                    ecx_5 = &ecx_5[8]
                    eax = &eax[6]
                while (ecx_5 u< esi_1)
            
            *(arg1 + 0xb) = 0x30
        label_66ed06:
            bool cond:1_1 = *(arg1 + 8) != 6
            *(arg1 + 0xa) = 3
            
            if (not(cond:1_1))
                *(arg1 + 8) = 2
            
            eax -= arg2
            *(arg1 + 4) = eax
    
    return eax
}
