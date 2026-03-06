// 函数名称: sub_631400
// 虚拟地址: 0x631400
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_631400(void* arg1)
{
    // 第一条实际指令: int32_t* eax = *(arg1 + 0x34)
    int32_t* eax = *(arg1 + 0x34)
    void* ecx_1 = *(*eax + 4)
    int32_t eax_2 = eax[0x11] & 0xffff8fff
    void* esi = *(arg1 + 4)
    
    if (eax_2 == 0x10)
        uint32_t eax_33 = zx.d(*(ecx_1 + 9))
        
        if (eax_33 == 1)
            return sub_62a150
        
        if (eax_33 == 2)
            if (*(esi + 9) == 4 && *(esi + 0x18) == 0xff000000 && *(esi + 0x10) == 0xff00)
                if (*(esi + 0xc) == 0xff && *(ecx_1 + 0xc) == 0x1f)
                label_63166c:
                    int32_t ecx_18 = *(ecx_1 + 0x10)
                    
                    if (ecx_18 == 0x7e0)
                        return sub_62d630
                    
                    if (ecx_18 == 0x3e0)
                        return sub_62d910
                else if (*(esi + 0x14) == 0xff && *(ecx_1 + 0x14) == 0x1f)
                    goto label_63166c
        else if (eax_33 == 4 && *(esi + 0xc) == *(ecx_1 + 0xc) && *(esi + 0x10) == *(ecx_1 + 0x10)
                && *(esi + 0x14) == *(ecx_1 + 0x14) && *(esi + 9) == 4)
            int32_t ecx_9 = zx.d(*(esi + 0x20)) & 0x80000007
            bool cond:1_1 = ecx_9 != 0
            
            if (ecx_9 s< 0)
                cond:1_1 = ((ecx_9 - 1) | 0xfffffff8) != 0xffffffff
            
            if (not(cond:1_1))
                int32_t edx_11 = zx.d(*(esi + 0x21)) & 0x80000007
                bool cond:2_1 = edx_11 != 0
                
                if (edx_11 s< 0)
                    cond:2_1 = ((edx_11 - 1) | 0xfffffff8) != 0xffffffff
                
                if (not(cond:2_1))
                    int32_t eax_40 = zx.d(*(esi + 0x22)) & 0x80000007
                    bool cond:4_1 = eax_40 != 0
                    
                    if (eax_40 s< 0)
                        cond:4_1 = ((eax_40 - 1) | 0xfffffff8) != 0xffffffff
                    
                    if (not(cond:4_1))
                        int32_t ecx_14 = zx.d(*(esi + 0x23)) & 0x80000007
                        bool cond:6_1 = ecx_14 != 0
                        
                        if (ecx_14 s< 0)
                            cond:6_1 = ((ecx_14 - 1) | 0xfffffff8) != 0xffffffff
                        
                        if (not(cond:6_1) && *(esi + 0x1f) == 0)
                            if (sub_612580() != 0)
                                return sub_62c790
                            
                            if (sub_612570() != 0)
                                return sub_62bec0
            
            if (*(esi + 0x18) == 0xff000000)
                return sub_62c4a0
        
        return sub_62fed0
    
    if (eax_2 == 0x12)
        if (*(esi + 0x18) == 0)
            uint32_t eax_8 = zx.d(*(ecx_1 + 9))
            
            if (eax_8 == 1)
                return sub_629ad0
            
            if (eax_8 == 2)
                if (*(*(arg1 + 0x34) + 4) != 0)
                    int32_t ecx_7 = *(ecx_1 + 0x10)
                    
                    if (ecx_7 == 0x7e0)
                        if (sub_612570() == 0)
                            return sub_62d290
                        
                        return sub_62cc30
                    
                    if (ecx_7 == 0x3e0)
                        if (sub_612570() == 0)
                            return sub_62d460
                        
                        return sub_62cf50
            else if (eax_8 == 4 && *(esi + 0xc) == *(ecx_1 + 0xc) && *(esi + 0x10) == *(ecx_1 + 0x10)
                    && *(esi + 0x14) == *(ecx_1 + 0x14) && *(esi + 9) == 4)
                int32_t eax_14 = zx.d(*(esi + 0x20)) & 0x80000007
                bool cond:3_1 = eax_14 != 0
                
                if (eax_14 s< 0)
                    cond:3_1 = ((eax_14 - 1) | 0xfffffff8) != 0xffffffff
                
                if (not(cond:3_1))
                    int32_t ecx_3 = zx.d(*(esi + 0x21)) & 0x80000007
                    bool cond:5_1 = ecx_3 != 0
                    
                    if (ecx_3 s< 0)
                        cond:5_1 = ((ecx_3 - 1) | 0xfffffff8) != 0xffffffff
                    
                    if (not(cond:5_1))
                        int32_t edx_4 = zx.d(*(esi + 0x22)) & 0x80000007
                        bool cond:7_1 = edx_4 != 0
                        
                        if (edx_4 s< 0)
                            cond:7_1 = ((edx_4 - 1) | 0xfffffff8) != 0xffffffff
                        
                        if (not(cond:7_1) && sub_612570() != 0)
                            return sub_62bd20
                
                if ((*(esi + 0x14) | *(esi + 0xc) | *(esi + 0x10)) == 0xffffff)
                    return sub_62c290
            
            return sub_62dbf0
    else if (eax_2 == 0x112 && *(esi + 0x18) == eax_2 - 0x112)
        if (*(ecx_1 + 9) != 1)
            return sub_62f140
        
        return sub_62a860
    
    return 0
}
