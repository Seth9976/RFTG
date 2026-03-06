// 函数名称: sub_4b3fd0
// 虚拟地址: 0x4b3fd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4b3fd0(void* arg1)
{
    // 第一条实际指令: int32_t* result = *(arg1 + 0x3c)
    int32_t* result = *(arg1 + 0x3c)
    
    if (result != 0)
        _aligned_free_base(result)
        int32_t eax = *(arg1 + 0x40)
        
        if (eax != 0)
            _aligned_free_base(eax)
        
        int32_t eax_1 = *(arg1 + 0x34)
        
        if (eax_1 != 0)
            _aligned_free_base(eax_1)
        
        int32_t eax_2 = *(arg1 + 0x44)
        
        if (eax_2 != 0)
            _aligned_free_base(eax_2)
        
        int32_t eax_3 = *(arg1 + 0x38)
        
        if (eax_3 != 0)
            _aligned_free_base(eax_3)
        
        int32_t eax_4 = *(arg1 + 0x48)
        
        if (eax_4 != 0)
            _aligned_free_base(eax_4)
        
        int32_t eax_5 = *(arg1 + 0x4c)
        
        if (eax_5 != 0)
            _aligned_free_base(eax_5)
        
        int32_t i = 0
        
        if (*(arg1 + 0x18) + 1 s> 0)
            do
                int32_t eax_8 = *(*(arg1 + 0x24) + (i << 2))
                
                if (eax_8 != 0)
                    _aligned_free_base(eax_8)
                
                int32_t eax_9 = *(*(arg1 + 0x28) + (i << 2))
                
                if (eax_9 != 0)
                    _aligned_free_base(eax_9)
                
                i += 1
            while (i s< *(arg1 + 0x18) + 1)
        
        int32_t eax_12 = *(arg1 + 0x24)
        
        if (eax_12 != 0)
            _aligned_free_base(eax_12)
        
        int32_t eax_13 = *(arg1 + 0x28)
        
        if (eax_13 != 0)
            _aligned_free_base(eax_13)
        
        int32_t i_1 = 0
        
        if (*(arg1 + 0x1c) + 1 s> 0)
            do
                int32_t eax_14 = *(*(arg1 + 0x2c) + (i_1 << 2))
                
                if (eax_14 != 0)
                    _aligned_free_base(eax_14)
                
                int32_t eax_16 = *(*(arg1 + 0x30) + (i_1 << 2))
                
                if (eax_16 != 0)
                    _aligned_free_base(eax_16)
                
                i_1 += 1
            while (i_1 s< *(arg1 + 0x1c) + 1)
        
        int32_t eax_17 = *(arg1 + 0x2c)
        
        if (eax_17 != 0)
            _aligned_free_base(eax_17)
        
        int32_t eax_18 = *(arg1 + 0x30)
        
        if (eax_18 != 0)
            _aligned_free_base(eax_18)
        
        int32_t i_2 = 0
        
        if (*(arg1 + 0x60) s> 0)
            do
                int32_t eax_19 = *(*(arg1 + 0x58) + (i_2 << 2))
                
                if (eax_19 != 0)
                    _aligned_free_base(eax_19)
                
                i_2 += 1
            while (i_2 s< *(arg1 + 0x60))
        
        int32_t eax_20 = *(arg1 + 0x58)
        *(arg1 + 0x60) = 0
        
        if (eax_20 != 0)
            _aligned_free_base(eax_20)
        
        result = *(arg1 + 0x5c)
        int32_t ecx_3
        
        if (result != 0)
            result, ecx_3 = _aligned_free_base(result)
        int32_t i_3 = 0
        
        if (*(arg1 + 0x18) s> 0)
            do
                int32_t eax_21 = *(arg1 + 0x68)
                result = eax_21 + (i_3 << 2)
                
                if (*(eax_21 + (i_3 << 2)) != 0)
                    result = *result
                    
                    if (result != 0)
                        result = _aligned_free_base(result)
                
                i_3 += 1
            while (i_3 s< *(arg1 + 0x18))
        
        int32_t esi_1 = *(arg1 + 0x68)
        
        if (esi_1 != 0)
            return _aligned_free_base(esi_1)
    
    return result
}
