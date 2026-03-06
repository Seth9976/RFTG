// 函数名称: sub_5caf80
// 虚拟地址: 0x5caf80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5caf80(int32_t* arg1)
{
    // 第一条实际指令: int32_t* result = sub_5c98a0(arg1, "_SDL_WindowTextureData", 0)
    int32_t* result = sub_5c98a0(arg1, "_SDL_WindowTextureData", 0)
    
    if (result == 0)
        return result
    
    int32_t* eax_1 = result[1]
    
    if (eax_1 != 0)
        sub_5d9870(eax_1)
    
    int32_t* eax_2 = *result
    
    if (eax_2 != 0)
        sub_5da5d0(eax_2)
    
    int32_t var_c_3 = result[2]
    sub_5d0af0()
    int32_t* result_1 = result
    return sub_5d0af0()
}
