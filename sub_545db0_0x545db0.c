// 函数名称: sub_545db0
// 虚拟地址: 0x545db0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_545db0(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, char arg5)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    data_3079454(1, &var_8)
    void* eax = var_8
    void* ecx = data_307882c
    
    if (*(ecx + 0x4090) != eax)
        *(ecx + 0x4090) = eax
        data_307943c(0x8892, eax)
        void* eax_1 = data_27e7fe4
        *(eax_1 + 0xc) += 1
    
    ebx.b = arg5
    int32_t eax_2 = 0x88e4
    
    if (ebx.b != 0)
        eax_2 = 0x88e0
    
    int32_t var_20_2 = eax_2
    int32_t var_24 = arg2
    int32_t var_28 = arg3
    data_3079440(0x8892)
    int128_t* eax_3 = sub_54b770(arg1 + 0x4240)
    void* edx = var_8
    *(eax_3 + 8) = arg3
    *(eax_3 + 0xc) = ebx.b
    *eax_3 = edx
    *(eax_3 + 4) = 0
    *(eax_3 + 0xdc) = arg4
    return *(eax_3 + 0x148)
}
