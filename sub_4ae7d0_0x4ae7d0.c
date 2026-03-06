// 函数名称: sub_4ae7d0
// 虚拟地址: 0x4ae7d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4ae7d0(int32_t arg1, char* arg2, int32_t arg3 @ esi, void* arg4 @ edi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t result = arg2 * 0xb4
    int32_t* ebx = result + arg4 + 0x20
    int32_t var_410 = 0
    
    if (*(arg4 + (arg3 << 1) + 0x1e06) != 0 && *(arg3 + ebx + 0x47) != 0)
        result = sub_4ae0d0(result, arg2, arg4, arg3)
        int32_t result_1 = result
        *(arg3 + ebx + 0x6f) = result.b
        int32_t ecx_1
        
        switch (arg3)
            case 0
                ecx_1 = 5
            case 1, 7, 0xe, 0xf
                ecx_1 = 4
            case 2, 6, 0xd, 0x10, 0x11, 0x12, 0x13
                ecx_1 = 3
            case 4, 0xc
                ecx_1 = 6
            case 8
                ecx_1 = 8
            default
                ecx_1 = 1
        
        if (result s< ecx_1)
            result = 0
            result_1 = 0
        
        int32_t i_2 = sx.d(*(arg4 + 0x458))
        
        if (i_2 s> 0)
            void* ecx_2 = arg3 + arg4 + 0x8f
            int32_t i_1 = i_2
            int32_t i
            
            do
                int32_t edx = sx.d(*ecx_2)
                
                if (edx s> var_410)
                    var_410 = edx
                
                ecx_2 += 0xb4
                i = i_1
                i_1 -= 1
            while (i != 1)
            result = result_1
        
        *(arg3 + arg4 + 0x1e56) = var_410.b
        
        if (result s< var_410 || result == 0)
            *(arg3 + ebx + 0x47) = 0
            *(arg4 + (arg3 << 1) + 0x1e2e) = 1
            
            if (*(arg4 + 0x18) == 0)
                int32_t var_428_2 = (&data_8c6758)[arg3]
                int32_t var_42c_1 = *ebx
                void var_40c
                sub_5a733b(&var_40c, "%s loses %s goal.\n")
                char const* const var_438_1 = "goal"
                void* var_43c_1 = &var_40c
                void* var_428_3 = &var_40c
                result = sub_4591b0(&var_40c, sub_4c5680("%s (%s)"), arg4, arg2)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
