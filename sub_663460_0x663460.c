// 函数名称: sub_663460
// 虚拟地址: 0x663460
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_663460(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t* edx
    
    if (*(arg1 + 0x180) != 0 || *(arg1 + 0x184) != 0)
        sub_664100(arg1, "gamma table being rebuilt")
        ecx, edx = sub_663310(arg1)
    
    int128_t* result
    
    if (arg2 s> 8)
        char eax
        
        if ((*(arg1 + 0x13b) & 2) == 0)
            ecx.b = *(arg1 + 0x19b)
        else
            ecx.b = *(arg1 + 0x198)
            eax = *(arg1 + 0x199)
            
            if (eax u> ecx.b)
                ecx.b = eax
            
            eax = *(arg1 + 0x19a)
            
            if (eax u> ecx.b)
                ecx.b = eax
        
        if (ecx.b - 1 u> 0xe)
            eax = 0
        else
            eax = 0x10 - ecx.b
        
        int32_t ecx_5 = *(arg1 + 0x74) & 0x4000400
        
        if (ecx_5 != 0 && eax u< 5)
            eax = 5
        else if (eax u> 8)
            eax = 8
        
        uint32_t edi_1 = zx.d(eax)
        int32_t eax_12 = *(arg1 + 0x17c)
        *(arg1 + 0x174) = edi_1
        
        if (ecx_5 == 0)
            int32_t eax_15
            
            if (eax_12 s<= 0)
                eax_15 = 0x186a0
            else
                eax_15 = sub_662da0(*(arg1 + 0x178), eax_12)
            
            result = sub_662f30(arg1, arg1 + 0x184, edi_1, eax_15)
        else if (eax_12 s<= 0)
            int32_t var_10_8 = 0x186a0
            result = sub_6630a0(arg1, arg1 + 0x184, edi_1.w)
        else
            int32_t var_10_7 = sub_662d50(*(arg1 + 0x178), eax_12)
            result = sub_6630a0(arg1, arg1 + 0x184, edi_1.w)
        
        if ((*(arg1 + 0x74) & 0x600080) != 0)
            sub_662f30(arg1, arg1 + 0x194, edi_1, sub_662d00(*(arg1 + 0x178)))
            int32_t eax_18 = *(arg1 + 0x17c)
            int32_t eax_19
            
            if (eax_18 s<= 0)
                eax_19 = *(arg1 + 0x178)
            else
                eax_19 = sub_662d00(eax_18)
            
            return sub_662f30(arg1, arg1 + 0x190, edi_1, eax_19)
    else
        int32_t eax_1 = *(arg1 + 0x17c)
        int32_t eax_3
        
        if (eax_1 s<= 0)
            eax_3 = 0x186a0
        else
            eax_3, ecx, edx = sub_662da0(*(arg1 + 0x178), eax_1)
        
        int32_t var_10_2 = eax_3
        void* var_14_3 = arg1 + 0x180
        result = sub_663230(arg1, edx, ecx)
        
        if ((*(arg1 + 0x74) & 0x600080) != 0)
            int32_t eax_5
            int32_t ecx_2
            eax_5, ecx_2 = sub_662d00(*(arg1 + 0x178))
            int32_t var_14_4 = eax_5
            void* var_18_2 = arg1 + 0x18c
            int32_t ecx_3
            int32_t* edx_2
            ecx_3, edx_2 = sub_663230(arg1, arg1 + 0x18c, ecx_2)
            int32_t eax_7 = *(arg1 + 0x17c)
            int32_t eax_8
            
            if (eax_7 s<= 0)
                eax_8 = *(arg1 + 0x178)
            else
                eax_8, ecx_3, edx_2 = sub_662d00(eax_7)
            
            int32_t var_10_5 = eax_8
            void* var_14_5 = arg1 + 0x188
            return sub_663230(arg1, edx_2, ecx_3)
    
    return result
}
