// 函数名称: sub_635090
// 虚拟地址: 0x635090
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_635090(int32_t* arg1)
{
    // 第一条实际指令: int32_t edx = arg1[3]
    int32_t edx = arg1[3]
    int128_t* ebx = *arg1
    int32_t i_3 = arg1[7]
    int32_t* ecx_1 = arg1[5]
    int32_t edi_1 = zx.d(*(arg1[0xb] + 9)) * arg1[6]
    void* eax_1 = arg1[8]
    arg1 = ecx_1
    void* var_c = eax_1
    bool c
    
    if (ebx u>= ecx_1)
        eax_1 = eax_1 * i_3 + ecx_1
        c = ebx u< eax_1
    else
        c = ecx_1 u< edx * i_3 + ebx
    
    int32_t eax_4 = neg.d(sbb.d(eax_1, eax_1, c))
    
    if (eax_4 == 0)
        int32_t edx_4
        eax_4, edx_4 = sub_612590()
        
        if (eax_4 == 0)
        label_63514d:
            int32_t ecx_3
            eax_4, ecx_3 = sub_612570()
            
            if (eax_4 != 0)
                eax_4.b = 7
                
                if ((edx.b & 7) == 0 && (var_c.b & 7) == 0)
                    if (i_3 != 0)
                        int32_t i
                        
                        do
                            eax_4 = sub_634ff0(arg1, ebx, edi_1)
                            ebx += edx
                            arg1 += var_c
                            i = i_3
                            i_3 -= 1
                        while (i != 1)
                    
                    return eax_4
            
            if (i_3 != 0)
                int32_t i_1
                
                do
                    int32_t var_1c_3 = edi_1
                    int128_t* var_20_3 = ebx
                    int32_t* var_24_3 = arg1
                    eax_4 = sub_5cd110()
                    ebx += edx
                    arg1 += var_c
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
        else
            eax_4.b = 0xf
            
            if ((0xf & ebx.b) != 0 || (edx.b & 0xf) != 0 || (arg1.b & 0xf) != 0 || (var_c.b & 0xf) != 0)
                goto label_63514d
            
            if (i_3 != 0)
                int32_t i_2
                
                do
                    edx_4 = sub_634fa0(arg1, edx_4, ebx, edi_1)
                    ebx += edx
                    arg1 += var_c
                    i_2 = i_3
                    i_3 -= 1
                while (i_2 != 1)
                return var_c
    else if (i_3 != 0)
        int32_t eax_5
        
        while (true)
            int32_t var_1c_1 = edi_1
            int128_t* var_20_1 = ebx
            int32_t* var_24_1 = ecx_1
            eax_5 = sub_5cd120()
            ebx += edx
            arg1 += var_c
            int32_t i_4 = i_3
            i_3 -= 1
            
            if (i_4 == 1)
                break
            
            ecx_1 = arg1
        
        return eax_5
    
    return eax_4
}
