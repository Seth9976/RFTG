// 函数名称: sub_49d720
// 虚拟地址: 0x49d720
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_49d720(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edx = arg2 * 0xb4
    int32_t result = *(edx + arg1 + 0xc8)
    int32_t* edi = edx + arg1 + 0x20
    int32_t edx_1 = edi[0x28]
    int32_t* esi = edx_1 + (result << 2)
    int32_t var_410 = arg1
    
    if (*(edx_1 + (result << 2)) == 0xfffffff6)
        while (true)
            result = edi[0x2a]
            
            if (result s>= edi[0x29])
                break
            
            int32_t eax_2 = esi[3]
            int32_t edx_2 = esi[4]
            int32_t ebx_1 = esi[1]
            char const* const eax_3
            
            if (eax_2 != 0xffffffff)
                eax_3 = *(eax_2 * 0xb4 + arg1 + 0x20)
            else
                eax_3 = "None"
            
            void* ecx = arg1 + ebx_1 * 0x14
            int32_t var_430_1 = (&data_8c66f8)[edx_2]
            char const* const var_434_1 = eax_3
            int32_t var_438_1 = **(ecx + 0x46c)
            int32_t var_43c_1 = *edi
            void var_40c
            sub_5a733b(&var_40c, "%s moved %s to (%s, %s).\n")
            char const* const var_448_1 = "debug"
            void* var_44c_1 = &var_40c
            int32_t var_430_2 = edx_2
            sub_49cc30(var_410, ebx_1, sub_4c5680("%s (%s)"), eax_2)
            esi = &esi[6]
            *(ecx + 0x473) = 0xff
            result = (esi - edi[0x28]) s>> 2
            edi[0x2a] = result
            edi[0x2c] = result
            
            if (*esi != 0xfffffff6)
                break
            
            arg1 = var_410
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
