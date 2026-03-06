// 函数名称: sub_65d8e0
// 虚拟地址: 0x65d8e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_65d8e0(int32_t* arg1, int32_t* arg2, int32_t arg3, int128_t* arg4)
{
    // 第一条实际指令: void* edi = arg2[5]
    void* edi = arg2[5]
    int32_t* var_14 = arg2
    void* var_18 = edi
    int32_t* ecx
    void* edx
    sub_65d610(arg1, edx, ecx)
    
    if (arg3 == 0)
        sub_5abfc0(arg4, 0, arg2[arg1[7] + 3] * 4)
        return 0
    
    int32_t eax_1 = arg2[1]
    int32_t ecx_1 = arg1[7]
    sub_65d960(arg4, *(arg2[2] + (ecx_1 << 2)), arg2[ecx_1 + 3], *arg2, arg3, eax_1, 
        fconvert.s(fconvert.t(*(arg3 + (eax_1 << 2)))), fconvert.s(float.t(*(edi + 0x10))))
    return 1
}
