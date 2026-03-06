// 函数名称: sub_495db0
// 虚拟地址: 0x495db0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_495db0(int32_t arg1 @ esi, char* arg2 @ edi, int128_t* arg3, int32_t arg4)
{
    // 第一条实际指令: char edx = __chkstk(0x1ed4)
    char edx = __chkstk(0x1ed4)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    char* var_c = arg2
    void var_1ed4
    int32_t edx_1 = sub_48bb40(arg3, &var_1ed4, edx)
    int32_t esi_2 = arg2 * 0xb4
    void var_1e74
    *(&var_1e74 + esi_2) = 0xffff
    int32_t entry_ebx
    void var_1e21
    
    if (entry_ebx == 2)
        *(&var_1e21 + esi_2) = 1
    else if (entry_ebx == 3)
        int32_t eax_3
        eax_3, edx_1 = sub_4a43c0(arg2, 0)
        void var_1e20
        
        if (eax_3 == 0)
            *(&var_1e20 + esi_2) = 1
        else
            int32_t i = sub_4a5400(eax_3, arg4, arg2, &var_1ed4, 0xffffffff, 0, 0)
            
            do
                i = sub_4a5e70(i, arg2, &var_1ed4, 0xffffffff)
            while (i != 0)
            
            edx_1 = sub_4a79a0(&var_1ed4)
    int32_t var_c_4 = 1
    char var_1ebb
    int32_t edx_4 = sx.d(var_1ebb)
    int80_t result = sub_4904a0(sub_48bc70(&var_1ed4, edx_1), edx_4.b, &var_1ed4, edx_4)
    sub_5a6aba(arg1 ^ &__saved_ebp)
    return result
}
