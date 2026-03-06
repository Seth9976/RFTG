// 函数名称: sub_4bfc40
// 虚拟地址: 0x4bfc40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4bfc40(float arg1, void* arg2)
{
    // 第一条实际指令: void* result = data_27e7aa4
    void* result = data_27e7aa4
    
    if (*(result + 0x1c) != 0 || *(result + 0x20) != 2)
        return result
    
    void var_18
    int32_t edx
    int32_t* eax_2 = sub_4f4990(&var_18, edx, arg2 + 0x1c, &var_18, arg1)
    int32_t edx_1 = eax_2[1]
    float var_28 = *eax_2
    int32_t var_24_1 = edx_1
    int32_t var_20_1 = eax_2[2]
    int32_t var_1c_1 = eax_2[3]
    return sub_4bf770(&var_28, data_27e7aa4, arg1, &var_28)
}
