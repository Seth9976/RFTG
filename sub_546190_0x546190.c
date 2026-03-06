// 函数名称: sub_546190
// 虚拟地址: 0x546190
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_546190(void* arg1, int32_t arg2, int32_t arg3, char arg4, char arg5)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    void* eax = data_307882c
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    
    if (*(eax + 0x408c) != 0)
        *(eax + 0x408c) = 0
        data_3079e24(0)
        void* eax_1 = data_27e7fe4
        *(eax_1 + 0x10) += 1
    
    data_3079454(1, &var_8)
    data_307943c(0x8893, var_8)
    ebx.b = arg5
    int32_t edi_1 = 0x88e4
    
    if (ebx.b != 0)
        edi_1 = 0x88e0
    
    int128_t* eax_2 = sub_54b770(arg1 + 0x4240)
    int32_t var_20_1 = edi_1
    *eax_2 = var_8
    int32_t var_24 = arg2
    int32_t var_28 = arg3
    *(eax_2 + 4) = 1
    *(eax_2 + 0xc) = ebx.b
    *(eax_2 + 8) = arg3
    *(eax_2 + 0x13e) = arg4
    data_3079440(0x8893)
    return *(eax_2 + 0x148)
}
