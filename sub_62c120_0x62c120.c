// 函数名称: sub_62c120
// 虚拟地址: 0x62c120
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_62c120(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx = arg1[6]
    int32_t ecx = arg1[6]
    int32_t i = arg1[7]
    int32_t* esi = *arg1
    int32_t edi_1 = arg1[4] s>> 2
    int32_t ebx_1 = arg1[9] s>> 2
    int32_t* ecx_1 = arg1[5]
    int32_t var_10 = edi_1
    int32_t var_14 = ebx_1
    
    while (i != 0)
        int32_t eax_3
        int32_t edx_1
        edx_1:eax_3 = sx.q(ecx + 3)
        int32_t var_c_1 = (eax_3 + (edx_1 & 3)) s>> 2
        
        switch (ecx & 3)
            case 0
                goto label_62c1c5
            case 1
                goto label_62c186
            case 2
                while (true)
                    int32_t eax_13 = *esi
                    int32_t edx_12 = *ecx_1
                    esi = &esi[1]
                    *ecx_1 = ((((edx_12 & 0xfefefe) + (eax_13 & 0xfefefe)) u>> 1)
                        + (edx_12 & eax_13 & 0x10101)) | 0xff000000
                    ecx_1 = &ecx_1[1]
                label_62c186:
                    int32_t eax_8 = *esi
                    int32_t edx_3 = *ecx_1
                    int32_t eax_10 = var_c_1 - 1
                    *ecx_1 = ((((edx_3 & 0xfefefe) + (eax_8 & 0xfefefe)) u>> 1)
                        + (edx_3 & eax_8 & 0x10101)) | 0xff000000
                    esi = &esi[1]
                    ecx_1 = &ecx_1[1]
                    var_c_1 = eax_10
                    
                    if (eax_10 s<= 0)
                        break
                    
                label_62c1c5:
                    int32_t eax_11 = *esi
                    int32_t edx_6 = *ecx_1
                    esi = &esi[1]
                    *ecx_1 = ((((edx_6 & 0xfefefe) + (eax_11 & 0xfefefe)) u>> 1)
                        + (edx_6 & eax_11 & 0x10101)) | 0xff000000
                    ecx_1 = &ecx_1[1]
                label_62c1f5:
                    int32_t eax_12 = *esi
                    int32_t edx_9 = *ecx_1
                    esi = &esi[1]
                    *ecx_1 = ((((edx_9 & 0xfefefe) + (eax_12 & 0xfefefe)) u>> 1)
                        + (edx_9 & eax_12 & 0x10101)) | 0xff000000
                    ecx_1 = &ecx_1[1]
                
                edi_1 = var_10
                ebx_1 = var_14
            case 3
                goto label_62c1f5
        
        i -= 1
        esi = &esi[edi_1]
        ecx_1 = &ecx_1[ebx_1]
    
    return i
}
