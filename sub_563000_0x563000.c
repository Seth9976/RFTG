// 函数名称: sub_563000
// 虚拟地址: 0x563000
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __thiscallsub_563000(void* arg1, char* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    int32_t* esp = &var_14
    int32_t arg_10
    char* result = sub_560ed0(arg_10)
    
    if (result != 0)
        int32_t* ecx_1 = *(arg1 + 0x10)
        void* edx_1 = *ecx_1
        char const* const result_1 = result
        (*(edx_1 + 0x44))(ecx_1, result_1)
        void* eax_1 = data_27e7fe4
        *(eax_1 + 0xc) += 1
        int32_t* eax_2 = *(arg1 + 0x10)
        void* ecx_2 = *eax_2
        result_1 = arg2
        (*(ecx_2 + 0x60))(eax_2, result_1)
        void* edx_3 = data_3079204
        void* ebx_1 = nullptr
        
        if (arg3 != 0)
            uint32_t eax_4 = zx.d(arg3.w)
            
            if (eax_4 u< *(edx_3 + 0x44))
                void* eax_6 = eax_4 * 0x24c + *(edx_3 + 0x40)
                ebx_1.b = *(eax_6 + 0x248) != arg3
                ebx_1 = (ebx_1 - 1) & eax_6
        
        if (*ebx_1 != 0)
            result_1 = "Dx11GraphicsInterface::DrawPrimitive"
            sub_4c5870("vertexBufferData->mBufferType == DX11BUFFER_VERTEX", &data_83f3d3, 
                "Windows\WindowsDx11.cpp", 0x8d7, result_1)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        arg_10 = 0
        void* eax_8 = sub_533ab0()
        result_1 = &arg_10
        var_8 = eax_8
        int32_t* eax_9 = *(arg1 + 0x10)
        (*(*eax_9 + 0x48))(eax_9, 0, 1, ebx_1 + 0x18, &var_8, result_1)
        
        if (arg4 == 0)
            int32_t* esi_3 = *(arg1 + 0x10)
            void* ecx_11 = *esi_3
            result_1 = nullptr
            
            if (arg7 == 0)
                (*(ecx_11 + 0x34))(esi_3, arg6)
                esp = &result_1
            else
                (*(ecx_11 + 0x54))(esi_3, arg6, arg7, 0)
                esp = &result_1
        else
            void* edx_5 = data_3079204
            uint32_t eax_11 = zx.d(arg4.w)
            int32_t* eax_12
            
            if (eax_11 u< *(edx_5 + 0x44))
                void* eax_14 = eax_11 * 0x24c + *(edx_5 + 0x40)
                int32_t edx_6
                edx_6.b = *(eax_14 + 0x248) != arg4
                eax_12 = eax_14 & (edx_6 - 1)
            else
                eax_12 = nullptr
            
            if (*eax_12 != 1)
                result_1 = "Dx11GraphicsInterface::DrawPrimitive"
                sub_4c5870("indexBufferData->mBufferType == DX11BUFFER_INDEX", &data_83f3d3, 
                    "Windows\WindowsDx11.cpp", 0x8e0, result_1)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t* ecx_7 = *(arg1 + 0x10)
            bool cond:0_1 = *(eax_12 + 5) == 0
            void* edx_8 = *ecx_7
            int32_t eax_16 = eax_12[6]
            result_1 = nullptr
            int32_t var_1c_4
            
            var_1c_4 = cond:0_1 ? 0x39 : 0x2a
            
            (*(edx_8 + 0x4c))(ecx_7, eax_16, var_1c_4)
            
            if (arg2 - 1 u> 4)
                result_1 = "Dx11GraphicsInterface::DrawPrimitive"
                sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x8f4, result_1)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edi_2
            
            switch (arg2)
                case 1
                    edi_2 = arg5
                case 2
                    edi_2 = arg5 * 2
                case 3
                    edi_2 = arg5 + 1
                case 4
                    edi_2 = arg5 * 3
                case 5
                    edi_2 = arg5 + 2
            
            int32_t eax_19 = *(ebx_1 + 0x14)
            int32_t* esi_2 = *(arg1 + 0x10)
            result_1 = nullptr
            
            if (arg7 == 0)
                (*(*esi_2 + 0x30))(esi_2, edi_2, eax_19)
                esp = &result_1
            else
                (*(*esi_2 + 0x50))(esi_2, edi_2, arg7, eax_19, 0)
                esp = &result_1
            
            if (*(ebx_1 + 4) != 0)
                *(ebx_1 + 0x14) += edi_2
        
        result = data_27e7fe4
        *(ebx_1 + 0x10) += arg6
        *(result + 4) += arg5
        *(result + 8) += arg6
        *result += 1
    
    *esp
    esp[1]
    esp[2]
    return result
}
