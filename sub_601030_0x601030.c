// 函数名称: sub_601030
// 虚拟地址: 0x601030
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_601030(int32_t* arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: sub_5d65d0(sub_5c99c0(arg1, "_SDL_DummySurface"))
    sub_5d65d0(sub_5c99c0(arg1, "_SDL_DummySurface"))
    uint32_t var_18
    int32_t var_14
    int32_t var_10
    int32_t var_c
    int32_t var_8
    sub_5d7350(0x16161804, &var_18, &var_14, &var_10, &var_c, &var_8)
    int32_t var_20
    int32_t var_1c
    sub_5c9bb0(arg1, &var_20, &var_1c)
    int32_t var_5c = var_8
    char* eax_3 = sub_5d6670(0, var_20, var_1c, var_18, var_14, var_10, var_c)
    
    if (eax_3 == 0)
        return 0xffffffff
    
    sub_5c98a0(arg1, "_SDL_DummySurface", eax_3)
    *arg2 = 0x16161804
    *arg3 = *(eax_3 + 0x14)
    *arg4 = *(eax_3 + 0x10)
    return 0
}
