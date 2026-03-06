// 函数名称: sub_5022a0
// 虚拟地址: 0x5022a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_5022a0(int32_t arg1, int32_t arg2, int32_t* arg3, void* arg4, char* arg5, int32_t arg6, char* arg7)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
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
    
    var_8 = ebx
    sub_4c4590(arg5)
    sub_518190(arg4 + 4, &var_8)
    char* var_18_1 = arg7
    int32_t var_1c = arg6
    char const* const var_20 = "%lld"
    sub_4c49b0(&ebx[1], arg7)
    return &ebx[1]
}
