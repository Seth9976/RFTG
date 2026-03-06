// 函数名称: sub_5027e0
// 虚拟地址: 0x5027e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5027e0(void* arg1, char* arg2, char** arg3)
{
    // 第一条实际指令: int32_t* esi = data_30785c8
    int32_t* esi = data_30785c8
    esi[3] += 1
    
    if (*esi == 0)
        sub_5043e0(esi)
    
    int32_t* ebx = *esi
    *esi = *ebx
    __builtin_memset(ebx, 0, 0x14)
    
    if (ebx != 0)
        *ebx = &data_83f3d3
        ebx[1] = &data_83f3d3
    
    int32_t* var_8 = ebx
    sub_4c4590(arg2)
    sub_518190(arg1 + 4, &var_8)
    int32_t var_1c_1 = arg3[2]
    char* edx_1 = *arg3
    int32_t var_20 = arg3[1]
    char* var_24 = edx_1
    char const* const var_28 = "%d %d %d"
    sub_4c49b0(&ebx[1], edx_1)
    return &ebx[1]
}
