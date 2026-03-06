// 函数名称: sub_66fcc0
// 虚拟地址: 0x66fcc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_66fcc0(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    void* arg_4
    void* esi = arg_4
    int32_t i_1 = arg5
    void* var_18
    char const* const __saved_ebx
    
    if (((*(esi + 0x258) & 1) != 0 || i_1 != 0) && i_1 u<= 0x100)
        if ((*(esi + 0x13b) & 2) != 0)
            *(esi + 0x12c) = i_1.w
            sub_66f010(esi, i_1 * 3)
            
            if (i_1 != 0)
                void* ebx_2 = arg4 + 2
                int32_t i
                
                do
                    arg_4.b = *(ebx_2 - 2)
                    arg_4:1.b = *(ebx_2 - 1)
                    arg_4:2.b = *ebx_2
                    sub_666640(esi, &arg_4, 3)
                    sub_662280(esi, &arg_4, 3)
                    ebx_2 += 3
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            int32_t eax_3 = *(esi + 0x124)
            var_8.b = (eax_3 u>> 0x18).b
            var_8:1.b = (eax_3 u>> 0x10).b
            *(esi + 0x2ac) = 0x82
            var_8:2.b = (eax_3 u>> 8).b
            var_8:3.b = eax_3.b
            int32_t result = sub_666640(esi, &var_8, 4)
            *(esi + 0x6c) |= 2
            return result
        
        __saved_ebx = "Ignoring request to write a PLTE chunk in grayscale PNG"
        var_18 = esi
    else
        __saved_ebx = "Invalid number of colors in palette"
        var_18 = esi
        
        if (*(esi + 0x13b) == 3)
            sub_664320(var_18, "Invalid number of colors in palette")
            noreturn
    
    return sub_664100(var_18, __saved_ebx)
}
