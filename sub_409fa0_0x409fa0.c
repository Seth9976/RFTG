// 函数名称: sub_409fa0
// 虚拟地址: 0x409fa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_409fa0()
{
    // 第一条实际指令: int32_t* eax = data_8c8710
    int32_t* eax = data_8c8710
    
    if (eax != 0)
        sub_4fecf0(eax, data_30d72dc, nullptr)
        
        if (eax != 0)
            _aligned_free_base(eax)
        
        data_8c8710 = 0
    
    sub_402350()
    sub_4075c0()
    sub_4031f0()
    sub_407670()
    sub_407730()
    void* result_1 = nullptr
    void* result
    
    while (true)
        void* edx_1 = data_27e7a44
        
        if (result_1 != 0)
            result = result_1 + 0x1c4
        else
            result = *(edx_1 + 0x1c)
        
        int32_t ecx_4 = *(edx_1 + 0x20) * 0x1c4 + *(edx_1 + 0x1c)
        
        if (result u>= ecx_4)
            break
        
        while ((*(result + 0x1c0) & 0xffff0000) == 0)
            result += 0x1c4
            
            if (result u>= ecx_4)
                goto label_40a036
        
        result_1 = result
        sub_4b8dc0(result)
    
    label_40a036:
    sub_4077f0()
    return result
}
