// 函数名称: sub_46c040
// 虚拟地址: 0x46c040
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_46c040(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_2 = sub_46b2b0(arg2)
    
    if (*(eax_2 + 0xaa1) != 0 && *(eax_2 + 0x550) == 0 && *(eax_2 + 0xa94) == 0)
        int32_t eax_3 = *(eax_2 + 0x24)
        int32_t var_a68 = 1
        *(eax_2 + 0xaa1) = 0
        sub_469e10(arg1, arg2, 5, eax_3, 0, 0, 0, 0)
    else if (*(eax_2 + 0xaa2) == 0 || *(eax_2 + 0x550) != 0 || *(eax_2 + 0xa94) != 0)
        void* ebx_1 = *(eax_2 + 0x550)
        int32_t var_52c
        sub_469fa0(ebx_1, eax_2 + 0x30, &var_52c)
        void* eax_5 = *(eax_2 + 0xa94)
        void var_a4c
        sub_469fa0(eax_5, eax_2 + 0x574, &var_a4c)
        int32_t var_a68_2 = 1
        void* var_a88_2
        int32_t var_a84_2
        int32_t var_a80_1
        int32_t* var_a78_1
        void* var_a74_1
        void* var_a70_1
        void* var_a6c_1
        
        if (*(eax_2 + 0x1c) != 0x1e)
            var_a6c_1 = eax_5
            var_a70_1 = &var_a4c
            var_a74_1 = ebx_1
            var_a78_1 = &var_52c
            int32_t var_a7c_3 = 0
            var_a80_1 = 6
            var_a84_2 = arg2
            var_a88_2 = arg1
        else
            var_a6c_1 = eax_5
            var_a70_1 = &var_a4c
            var_a74_1 = ebx_1
            var_a78_1 = &var_52c
            int32_t var_a7c_2 = 0
            var_a80_1 = 9
            var_a84_2 = arg2
            var_a88_2 = arg1
        
        sub_469e10(var_a88_2, var_a84_2, var_a80_1, 0, var_a78_1, var_a74_1, var_a70_1, var_a6c_1)
        
        if (sub_436960(*(data_27e7a40 + 0x74)) != 0)
            int32_t eax_10 = *(eax_2 + 0x1c)
            
            if ((eax_10 == 9 || eax_10 == 0xb || eax_10 == 7) && *(eax_2 + 0x550) s> 1)
                *(eax_2 + 0x1f94) = var_52c
    else
        int32_t ecx = *(eax_2 + 0x24)
        int32_t var_a68_1 = 1
        *(eax_2 + 0xaa2) = 0
        sub_469e10(arg1, arg2, 5, ecx, 0, 0, 0, 0)
    
    sub_469ff0(arg2)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}
