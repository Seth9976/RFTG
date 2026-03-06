// 函数名称: sub_46da50
// 虚拟地址: 0x46da50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_46da50(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void var_330
    void* var_34c = &var_330
    int32_t var_350 = 5
    int32_t eax_4
    int32_t ecx
    int32_t edx
    int32_t edx_1
    eax_4, edx_1 = sub_49dea0(arg2, edx, ecx, arg1)
    int32_t result = 0
    int32_t ebx = 0
    
    if (eax_4 s> 0)
        do
            int32_t var_32c[0xc8]
            void* esi_1 = var_32c[ebx * 2]
            int32_t eax_7
            
            if (arg3 == 2)
                eax_7 = *(esi_1 + 8) & 0x800
            label_46daf4:
                
                if (eax_7 != 0)
                    edx_1 = sx.d(*(esi_1 + 0x10))
                    result += edx_1
            else if (arg3 != 5)
                if (arg3 != 3)
                    if (arg3 == 4)
                        eax_7 = *(esi_1 + 8) & 0x2000
                        goto label_46daf4
                else if ((*(esi_1 + 8) & 0x1000) != 0)
                    result += sx.d(*(esi_1 + 0x10))
            else if ((*(esi_1 + 8) & 0x4000) != 0)
                result += sx.d(*(esi_1 + 0x10))
            
            if ((*(esi_1 + 8) & 0x20000) != 0)
                char eax_21
                eax_21, edx_1 = sub_46d9b0(arg2, edx_1, arg1, arg2)
                
                if (eax_21 != 0)
                    result += sx.d(*(esi_1 + 0x10))
            
            ebx += 1
        while (ebx s< eax_4)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
