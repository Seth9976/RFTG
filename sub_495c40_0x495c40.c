// 函数名称: sub_495c40
// 虚拟地址: 0x495c40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_495c40(int32_t arg1 @ esi, int32_t* arg2 @ edi, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: char* entry_ebx
    char* entry_ebx
    void* eax_2 = entry_ebx * 0xb4 + arg2
    void* var_8 = eax_2
    *(eax_2 + 0x60) = arg1.w
    int32_t edx
    
    if (arg1 != 0xffffffff)
        edx = sub_49f030(eax_2, arg1, arg2, entry_ebx, 0)
        eax_2 = var_8
    
    if (arg3 != 2)
        if (arg3 == 3)
            if (arg1 == 0xffffffff)
                eax_2, edx = sub_4a43c0(entry_ebx, 0)
            
            if (arg1 != 0xffffffff || eax_2 != 0)
                int32_t i = sub_4a5400(eax_2, arg4, entry_ebx, arg2, arg1, 0, 0)
                
                do
                    i = sub_4a5e70(i, entry_ebx, arg2, arg1)
                while (i != 0)
                
                edx = sub_4a79a0(arg2)
            else
                *(var_8 + 0xb4) = 1
    else if (arg1 == 0xffffffff)
        *(eax_2 + 0xb3) = 1
    else
        edx = sub_4a00b0(eax_2, entry_ebx, arg2, arg1)
    
    int32_t var_10_3 = 1
    int32_t eax_4 = sub_48bc70(arg2, edx)
    int32_t edx_6 = sx.d(*(arg2 + 0x19))
    return sub_4904a0(eax_4, edx_6.b, arg2, edx_6)
}
