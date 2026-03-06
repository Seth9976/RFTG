// 函数名称: sub_502220
// 虚拟地址: 0x502220
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_502220(void* arg1, char* arg2, char* arg3)
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
    char* var_1c_1 = arg3
    void* const var_20 = &data_85f660
    sub_4c49b0(&ebx[1], arg3)
    return &ebx[1]
}
