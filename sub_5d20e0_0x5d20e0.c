// 函数名称: sub_5d20e0
// 虚拟地址: 0x5d20e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5d20e0()
{
    // 第一条实际指令: if (data_bf7808 != 0)
    if (data_bf7808 != 0)
        sub_5cee50()
        data_bf7808 = 0
    
    for (void* i = nullptr; i u< 0x9080; i += 0x484)
        int32_t var_c_1 = *(i + 0xbeebcc)
        sub_5d0af0()
        *(i + 0xbeebcc) = 0
    
    int32_t* result = data_bf7804
    
    if (result != 0)
        result = (*(*result + 8))(result)
        data_bf7804 = 0
    
    if (data_bf7800 != 0)
        result = CoUninitialize()
        data_bf7800 = 0
    
    return result
}
