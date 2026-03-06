// 函数名称: sub_5a61c0
// 虚拟地址: 0x5a61c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5a61c0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: void* var_1c
    void* var_1c
    int32_t var_18
    char eax_1
    int32_t edx
    eax_1, edx = sub_5a5ee0(arg4, arg2, &var_18, arg3, &var_1c)
    
    if (eax_1 != 0)
        void* esi_1 = var_1c
        
        if (esi_1 != 0xc)
            void* var_14
            var_1c = sub_5540b0(esi_1, var_14)
            int32_t eax_4 = sub_554170(esi_1, edx, var_14)
            int32_t edx_1 = var_18
            void* ecx_2 = var_1c
            arg4[1] = var_14
            arg4[2] = edx_1
            arg4[4] = esi_1
            arg4[3] = ecx_2
            int32_t eax_5 = sub_4cce80(eax_4)
            *arg4 = eax_5
            int32_t* eax_6 = sub_5a898b(arg3, "rb")
            
            if (eax_6 == 0)
                int32_t* var_2c_2 = arg3
                sub_4c5680("failed to open bmp file: %s")
                int32_t result
                result.b = 0
                return result
            
            int32_t var_2c_3 = var_18
            
            if (sub_5a6000(eax_6, eax_6, eax_5, arg3, var_1c, var_14) != 0)
                return 1
        else
            int32_t* var_2c_1 = arg3
            sub_4c5680("We don't currently support palletized textures '%s'")
    
    return 0
}
