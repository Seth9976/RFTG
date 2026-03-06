// 函数名称: sub_407db0
// 虚拟地址: 0x407db0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_407db0()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    sub_408a40()
    sub_4f7100(data_27e7a28)
    sub_4fd570()
    sub_407730()
    int32_t* eax_1 = data_8c8710
    
    if (eax_1 != 0)
        sub_4fecf0(eax_1, data_30d72dc, nullptr)
        
        if (eax_1 != 0)
            _aligned_free_base(eax_1)
        
        data_8c8710 = 0
    
    sub_402350()
    sub_4b63f0()
    sub_4077f0()
    sub_4fe0d0()
    sub_401550()
    sub_412120()
    sub_474ae0()
    sub_409fa0()
    int32_t* eax_2 = data_27e7a60
    
    if (eax_2 != 0)
        sub_4fecf0(eax_2, data_307b674, nullptr)
        
        if (eax_2 != 0)
            _aligned_free_base(eax_2)
        
        data_27e7a60 = 0
    
    int32_t* eax_3 = data_27e7a50
    
    if (eax_3 != 0)
        sub_4fecf0(eax_3, data_307b65c, nullptr)
        
        if (eax_3 != 0)
            _aligned_free_base(eax_3)
        
        data_27e7a50 = 0
    
    int32_t ecx_3 = sub_407f10()
    int32_t* eax_4 = data_27e7a64
    
    if (eax_4 != 0)
        ecx_3 = sub_4fecf0(eax_4, data_307b67c, nullptr)
        
        if (eax_4 != 0)
            ecx_3 = _aligned_free_base(eax_4)
    
    void* result = data_27e7fd0
    
    if (*(result + 0x27) != 0)
        result = sub_510b30(ecx_3, data_3092a04)
        int32_t ecx_4 = data_be1e84
        data_be1e84 = zx.d(*(result + 0x4cc))
        *(result + 0x4cc) = ecx_4
        data_be1e88 -= 1
    
    return result
}
