// 函数名称: sub_407f10
// 虚拟地址: 0x407f10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_407f10()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    int32_t* eax = data_27e7a5c
    
    if (eax != 0)
        sub_4fecf0(eax, data_307ccc4, nullptr)
        
        if (eax != 0)
            _aligned_free_base(eax)
        
        data_27e7a5c = 0
    
    int32_t* result = data_27e7a58
    
    if (result != 0)
        int32_t* result_1 = result
        result = sub_4fecf0(result, data_307b684, nullptr)
        
        if (result_1 != 0)
            result = _aligned_free_base(result_1)
        
        data_27e7a58 = 0
        data_27e7a54 = 0
    
    return result
}
