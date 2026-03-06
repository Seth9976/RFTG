// 函数名称: sub_56a6f0
// 虚拟地址: 0x56a6f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_56a6f0()
{
    // 第一条实际指令: void* eax = data_3079208
    void* eax = data_3079208
    
    if (eax != 0)
        int32_t eax_1 = *(eax + 4)
        int80_t st0_1
        
        if (eax_1 != 0x1e)
            if (eax_1 == 0x22)
                int32_t eax_2
                int80_t st0_2
                st0_2, eax_2 = sub_52c3f0()
                return eax_2
            
            if (eax_1 == 0x1d)
                int32_t eax_3
                int80_t st0_3
                st0_3, eax_3 = sub_5837f0()
                return eax_3
            
            if (eax_1 == 0x20)
                return sub_571840()
            
            int32_t* eax_5 = sub_4e79e0()
            int32_t i_3
            int32_t ecx_2
            int32_t edx_1
            i_3, ecx_2, edx_1 = sub_4eabe0(eax_5)
            int32_t i = i_3
            int16_t top
            
            while (i != 0)
                uint32_t esi_2 = zx.d(i.w)
                i = sub_4eadb0(esi_2 + 1, edx_1, eax_5)
                ecx_2, edx_1 = sub_4e7c30(esi_2 * 0x94 + *eax_5)
                top -= 1
                unimplemented  {call 0x4e7c30}
            
            int32_t* eax_8 = sub_4eb140()
            void* const var_30 = nullptr
            char eax_9
            int32_t ecx_4
            eax_9, ecx_4 = sub_4f3720(ecx_2, eax_8, &var_30)
            
            if (eax_9 != 0)
                char i_1
                
                do
                    unimplemented  {fld st0, dword [0x30792ac]}
                    int32_t var_44_2 = ecx_4
                    float var_44_3 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t ecx_5 = sub_4eed90(var_30, var_44_3)
                    top -= 1
                    unimplemented  {call 0x4eed90}
                    i_1, ecx_4 = sub_4f3720(ecx_5, eax_8, &var_30)
                while (i_1 != 0)
            
            int32_t* eax_11 = sub_4d39e0()
            var_30 = nullptr
            
            if (sub_56be00(ecx_4, eax_11, &var_30) != 0)
                char i_2
                
                do
                    i_2 = sub_56be00(sub_4d4ab0(), eax_11, &var_30)
                while (i_2 != 0)
            
            eax = data_3079214
            
            if (eax u> 3)
                sub_4c5870("Halt", &data_83f3d3, "Editor\EditorControls.cpp", 0x504, 
                    "EditorControlsUpdate")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            switch (eax)
                case 1
                    eax = sub_56c650()
                case 2
                    eax = sub_56dab0()
            
            if (data_3079214 == 0)
                int32_t eax_13 = *(data_3079210 + 0x20)
                
                if (eax_13 == 1)
                    sub_56a090()
                else
                    void var_28
                    float var_20[0x6]
                    
                    if (eax_13 == 2)
                        if (sub_56a1e0(&var_28) != 0 && sub_56a8f0(&var_20) == 0)
                            sub_4c6230(&var_30)
                            unimplemented  {call 0x4c6230}
                    else if (eax_13 == 3)
                        sub_56a430()
                
                return sub_56a5f0()
        else
            st0_1, eax = sub_578f30()
    
    return eax
}
