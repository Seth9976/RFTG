// 函数名称: sub_5d6060
// 虚拟地址: 0x5d6060
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d6060(int32_t* arg1, int32_t* arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        void* ecx_1 = arg3
        
        if (ecx_1 != 0)
            if (arg1[7] != 0 || *(ecx_1 + 0x1c) != 0)
                sub_5cce60("Surfaces must not be locked during blit")
                return 0xffffffff
            
            int32_t* esi = arg4
            
            if (esi == 0)
                int32_t var_14_1 = *(ecx_1 + 8)
                int32_t var_10_1 = *(ecx_1 + 0xc)
                int32_t var_18_1 = 0
                int32_t var_1c = 0
                esi = &var_1c
            
            int32_t var_c
            int32_t var_8
            int32_t ebx
            int32_t edi_1
            
            if (arg2 == 0)
                ebx = arg1[2]
                edi_1 = arg1[3]
                var_c = 0
                var_8 = 0
            else
                int32_t edx_1 = *arg2
                ebx = arg2[2]
                var_8 = edx_1
                
                if (edx_1 s< 0)
                    ebx += edx_1
                    *esi -= edx_1
                    var_8 = 0
                    edx_1 = 0
                
                int32_t eax_3 = arg1[2] - edx_1
                
                if (eax_3 s< ebx)
                    ebx = eax_3
                
                int32_t edx_2 = arg2[1]
                edi_1 = arg2[3]
                var_c = edx_2
                
                if (edx_2 s< 0)
                    edi_1 += edx_2
                    esi[1] -= edx_2
                    var_c = 0
                    edx_2 = 0
                
                int32_t eax_6 = arg1[3] - edx_2
                
                if (eax_6 s< edi_1)
                    edi_1 = eax_6
            
            int32_t edx_3 = *esi
            int32_t eax_8 = *(ecx_1 + 0x24) - edx_3
            
            if (eax_8 s> 0)
                ebx -= eax_8
                var_8 += eax_8
                *esi = edx_3 + eax_8
            
            int32_t eax_12 = *esi - *(ecx_1 + 0x2c) - *(ecx_1 + 0x24) + ebx
            
            if (eax_12 s> 0)
                ebx -= eax_12
            
            int32_t edx_5 = esi[1]
            int32_t eax_14 = *(ecx_1 + 0x28) - edx_5
            
            if (eax_14 s> 0)
                edi_1 -= eax_14
                var_c += eax_14
                esi[1] = edx_5 + eax_14
            
            int32_t eax_18 = esi[1] - *(ecx_1 + 0x30) - *(ecx_1 + 0x28) + edi_1
            
            if (eax_18 s> 0)
                edi_1 -= eax_18
            
            int32_t* eax_19 = arg1
            void* edx_7 = eax_19[0xd]
            
            if ((*(edx_7 + 0x44) & 0x200) != 0)
                *(edx_7 + 0x44) &= 0xfffffdff
                sub_5d8400(eax_19[0xd])
                ecx_1 = arg3
                eax_19 = arg1
            
            if (ebx s<= 0 || edi_1 s<= 0)
                esi[3] = 0
                esi[2] = 0
                return 0
            
            int32_t var_2c = var_8
            int32_t var_28 = var_c
            esi[2] = ebx
            int32_t var_24 = ebx
            esi[3] = edi_1
            int32_t var_20 = edi_1
            return sub_5d5ff0(eax_19, &var_2c, ecx_1, esi)
    
    sub_5cce60("SDL_UpperBlit: passed a NULL surface")
    return 0xffffffff
}
